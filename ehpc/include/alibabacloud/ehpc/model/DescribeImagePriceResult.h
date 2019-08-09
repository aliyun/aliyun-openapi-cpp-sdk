/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEPRICERESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEPRICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT DescribeImagePriceResult : public ServiceResult
			{
			public:


				DescribeImagePriceResult();
				explicit DescribeImagePriceResult(const std::string &payload);
				~DescribeImagePriceResult();
				float getOriginalPrice()const;
				float getDiscountPrice()const;
				int getAmount()const;
				std::string getImageId()const;
				float getTradePrice()const;

			protected:
				void parse(const std::string &payload);
			private:
				float originalPrice_;
				float discountPrice_;
				int amount_;
				std::string imageId_;
				float tradePrice_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_DESCRIBEIMAGEPRICERESULT_H_