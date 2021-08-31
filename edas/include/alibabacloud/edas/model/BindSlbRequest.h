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

#ifndef ALIBABACLOUD_EDAS_MODEL_BINDSLBREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_BINDSLBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <alibabacloud/edas/EdasExport.h>

namespace AlibabaCloud
{
	namespace Edas
	{
		namespace Model
		{
			class ALIBABACLOUD_EDAS_EXPORT BindSlbRequest : public RoaServiceRequest
			{

			public:
				BindSlbRequest();
				~BindSlbRequest();

				std::string getVServerGroupId()const;
				void setVServerGroupId(const std::string& vServerGroupId);
				int getListenerPort()const;
				void setListenerPort(int listenerPort);
				std::string getSlbId()const;
				void setSlbId(const std::string& slbId);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getSlbIp()const;
				void setSlbIp(const std::string& slbIp);
				std::string getType()const;
				void setType(const std::string& type);

            private:
				std::string vServerGroupId_;
				int listenerPort_;
				std::string slbId_;
				std::string appId_;
				std::string slbIp_;
				std::string type_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_BINDSLBREQUEST_H_