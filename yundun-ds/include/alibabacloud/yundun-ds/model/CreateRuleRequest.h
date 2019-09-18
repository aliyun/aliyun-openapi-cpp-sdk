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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_CREATERULEREQUEST_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_CREATERULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/yundun-ds/Yundun_dsExport.h>

namespace AlibabaCloud
{
	namespace Yundun_ds
	{
		namespace Model
		{
			class ALIBABACLOUD_YUNDUN_DS_EXPORT CreateRuleRequest : public RpcServiceRequest
			{

			public:
				CreateRuleRequest();
				~CreateRuleRequest();

				long getRiskLevelId()const;
				void setRiskLevelId(long riskLevelId);
				std::string getContent()const;
				void setContent(const std::string& content);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				long getCustomType()const;
				void setCustomType(long customType);
				std::string getName()const;
				void setName(const std::string& name);
				int getCategory()const;
				void setCategory(int category);

            private:
				long riskLevelId_;
				std::string content_;
				std::string sourceIp_;
				std::string lang_;
				int featureType_;
				long customType_;
				std::string name_;
				int category_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_CREATERULEREQUEST_H_