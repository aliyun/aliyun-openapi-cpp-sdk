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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTSECURITYGROUPRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTSECURITYGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListSecurityGroupResult : public ServiceResult
			{
			public:
				struct Sgs
				{
					std::string securityGroupName;
					std::string vpcId;
					std::string securityGroupId;
					std::string securityGroupType;
				};


				ListSecurityGroupResult();
				explicit ListSecurityGroupResult(const std::string &payload);
				~ListSecurityGroupResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<Sgs> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<Sgs> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTSECURITYGROUPRESULT_H_