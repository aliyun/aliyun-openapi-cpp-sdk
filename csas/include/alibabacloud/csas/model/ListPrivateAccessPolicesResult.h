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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTPRIVATEACCESSPOLICESRESULT_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTPRIVATEACCESSPOLICESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/csas/CsasExport.h>

namespace AlibabaCloud
{
	namespace Csas
	{
		namespace Model
		{
			class ALIBABACLOUD_CSAS_EXPORT ListPrivateAccessPolicesResult : public ServiceResult
			{
			public:
				struct Policy
				{
					struct CustomUserAttribute
					{
						std::string relation;
						int idpId;
						std::string userGroupType;
						std::string value;
					};
					std::vector<Policy::CustomUserAttribute> customUserAttributes;
					std::string status;
					std::string description;
					std::vector<std::string> tagIds;
					int priority;
					std::vector<std::string> applicationIds;
					std::string createTime;
					std::string name;
					std::string userGroupMode;
					std::string applicationType;
					std::string deviceAttributeAction;
					std::vector<std::string> userGroupIds;
					std::string deviceAttributeId;
					std::string policyAction;
					std::string policyId;
				};


				ListPrivateAccessPolicesResult();
				explicit ListPrivateAccessPolicesResult(const std::string &payload);
				~ListPrivateAccessPolicesResult();
				int getTotalNum()const;
				std::vector<Policy> getPolices()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalNum_;
				std::vector<Policy> polices_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTPRIVATEACCESSPOLICESRESULT_H_