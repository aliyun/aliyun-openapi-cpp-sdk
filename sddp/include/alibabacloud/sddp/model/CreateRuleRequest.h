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

#ifndef ALIBABACLOUD_SDDP_MODEL_CREATERULEREQUEST_H_
#define ALIBABACLOUD_SDDP_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT CreateRuleRequest : public RpcServiceRequest
			{

			public:
				CreateRuleRequest();
				~CreateRuleRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				std::string getName()const;
				void setName(const std::string& name);
				long getRiskLevelId()const;
				void setRiskLevelId(long riskLevelId);
				std::string getLang()const;
				void setLang(const std::string& lang);
				long getCustomType()const;
				void setCustomType(long customType);
				int getCategory()const;
				void setCategory(int category);
				std::string getContent()const;
				void setContent(const std::string& content);

            private:
				std::string sourceIp_;
				int featureType_;
				std::string name_;
				long riskLevelId_;
				std::string lang_;
				long customType_;
				int category_;
				std::string content_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_CREATERULEREQUEST_H_