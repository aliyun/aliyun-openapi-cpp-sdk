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

#ifndef ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCECHARGETYPERESULT_H_
#define ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCECHARGETYPERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT ModifyRCInstanceChargeTypeResult : public ServiceResult
			{
			public:
				struct FeeOfInstance
				{
					std::string instanceId;
					std::string currency;
					std::string fee;
				};


				ModifyRCInstanceChargeTypeResult();
				explicit ModifyRCInstanceChargeTypeResult(const std::string &payload);
				~ModifyRCInstanceChargeTypeResult();
				std::vector<FeeOfInstance> getFeeOfInstances()const;
				std::string getChargeType()const;
				std::vector<std::string> getExpiredTime()const;
				std::vector<std::string> getInstanceIds()const;
				std::string getOrderId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<FeeOfInstance> feeOfInstances_;
				std::string chargeType_;
				std::vector<std::string> expiredTime_;
				std::vector<std::string> instanceIds_;
				std::string orderId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_MODIFYRCINSTANCECHARGETYPERESULT_H_