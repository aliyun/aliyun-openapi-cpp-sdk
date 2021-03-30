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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEBIZTYPESETTINGREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEBIZTYPESETTINGREQUEST_H_

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
			class ALIBABACLOUD_GREEN_EXPORT UpdateBizTypeSettingRequest : public RpcServiceRequest
			{

			public:
				UpdateBizTypeSettingRequest();
				~UpdateBizTypeSettingRequest();

				std::string getAntispam()const;
				void setAntispam(const std::string& antispam);
				std::string getPorn()const;
				void setPorn(const std::string& porn);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getTerrorism()const;
				void setTerrorism(const std::string& terrorism);
				std::string getBizTypeName()const;
				void setBizTypeName(const std::string& bizTypeName);
				std::string getLive()const;
				void setLive(const std::string& live);
				std::string getAd()const;
				void setAd(const std::string& ad);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);

            private:
				std::string antispam_;
				std::string porn_;
				std::string sourceIp_;
				std::string terrorism_;
				std::string bizTypeName_;
				std::string live_;
				std::string ad_;
				std::string resourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEBIZTYPESETTINGREQUEST_H_