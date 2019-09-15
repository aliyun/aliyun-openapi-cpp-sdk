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

#ifndef ALIBABACLOUD_AEGIS_MODEL_CREATESCREENSETTINGREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_CREATESCREENSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT CreateScreenSettingRequest : public RpcServiceRequest
			{

			public:
				CreateScreenSettingRequest();
				~CreateScreenSettingRequest();

				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getLogoUrl()const;
				void setLogoUrl(const std::string& logoUrl);
				bool getLogoPower()const;
				void setLogoPower(bool logoPower);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				int getId()const;
				void setId(int id);
				std::string getScreenDataMap()const;
				void setScreenDataMap(const std::string& screenDataMap);
				int getScreenDefault()const;
				void setScreenDefault(int screenDefault);
				std::string getMonitorUrl()const;
				void setMonitorUrl(const std::string& monitorUrl);

            private:
				std::string title_;
				std::string logoUrl_;
				bool logoPower_;
				std::string sourceIp_;
				int id_;
				std::string screenDataMap_;
				int screenDefault_;
				std::string monitorUrl_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_CREATESCREENSETTINGREQUEST_H_