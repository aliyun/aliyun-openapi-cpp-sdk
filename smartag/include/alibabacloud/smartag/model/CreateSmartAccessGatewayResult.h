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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT CreateSmartAccessGatewayResult : public ServiceResult
			{
			public:


				CreateSmartAccessGatewayResult();
				explicit CreateSmartAccessGatewayResult(const std::string &payload);
				~CreateSmartAccessGatewayResult();
				std::string getDescription()const;
				std::string getSmartAGId()const;
				std::string getOrderId()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string smartAGId_;
				std::string orderId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_CREATESMARTACCESSGATEWAYRESULT_H_