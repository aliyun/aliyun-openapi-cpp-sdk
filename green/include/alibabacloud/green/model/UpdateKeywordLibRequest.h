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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEKEYWORDLIBREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEKEYWORDLIBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT UpdateKeywordLibRequest : public RpcServiceRequest
			{

			public:
				UpdateKeywordLibRequest();
				~UpdateKeywordLibRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				bool getEnable()const;
				void setEnable(bool enable);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getBizTypes()const;
				void setBizTypes(const std::string& bizTypes);
				int getId()const;
				void setId(int id);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getMatchMode()const;
				void setMatchMode(const std::string& matchMode);

            private:
				std::string sourceIp_;
				bool enable_;
				std::string name_;
				std::string bizTypes_;
				int id_;
				std::string lang_;
				std::string matchMode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEKEYWORDLIBREQUEST_H_