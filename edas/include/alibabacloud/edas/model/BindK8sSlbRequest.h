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

#ifndef ALIBABACLOUD_EDAS_MODEL_BINDK8SSLBREQUEST_H_
#define ALIBABACLOUD_EDAS_MODEL_BINDK8SSLBREQUEST_H_

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
			class ALIBABACLOUD_EDAS_EXPORT BindK8sSlbRequest : public RoaServiceRequest
			{

			public:
				BindK8sSlbRequest();
				~BindK8sSlbRequest();

				std::string getScheduler()const;
				void setScheduler(const std::string& scheduler);
				std::string getServicePortInfos()const;
				void setServicePortInfos(const std::string& servicePortInfos);
				std::string getSlbId()const;
				void setSlbId(const std::string& slbId);
				std::string getSlbProtocol()const;
				void setSlbProtocol(const std::string& slbProtocol);
				std::string getPort()const;
				void setPort(const std::string& port);
				std::string getAppId()const;
				void setAppId(const std::string& appId);
				std::string getSpecification()const;
				void setSpecification(const std::string& specification);
				std::string getClusterId()const;
				void setClusterId(const std::string& clusterId);
				std::string getType()const;
				void setType(const std::string& type);
				std::string getTargetPort()const;
				void setTargetPort(const std::string& targetPort);

            private:
				std::string scheduler_;
				std::string servicePortInfos_;
				std::string slbId_;
				std::string slbProtocol_;
				std::string port_;
				std::string appId_;
				std::string specification_;
				std::string clusterId_;
				std::string type_;
				std::string targetPort_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDAS_MODEL_BINDK8SSLBREQUEST_H_