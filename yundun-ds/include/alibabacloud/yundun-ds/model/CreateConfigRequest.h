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

#ifndef ALIBABACLOUD_YUNDUN_DS_MODEL_CREATECONFIGREQUEST_H_
#define ALIBABACLOUD_YUNDUN_DS_MODEL_CREATECONFIGREQUEST_H_

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
			class ALIBABACLOUD_YUNDUN_DS_EXPORT CreateConfigRequest : public RpcServiceRequest
			{

			public:
				CreateConfigRequest();
				~CreateConfigRequest();

				std::string getCode()const;
				void setCode(const std::string& code);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getValue()const;
				void setValue(const std::string& value);
				int getFeatureType()const;
				void setFeatureType(int featureType);
				std::string getConfigList()const;
				void setConfigList(const std::string& configList);

            private:
				std::string code_;
				std::string description_;
				std::string sourceIp_;
				std::string lang_;
				std::string value_;
				int featureType_;
				std::string configList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_YUNDUN_DS_MODEL_CREATECONFIGREQUEST_H_