#include "Order.h"

Order::Order ( status s, float c, float p ): order_status (s),
                                             shipping_cost (c), 
                                             price (p),
                                             customer ( 0 ) {}

