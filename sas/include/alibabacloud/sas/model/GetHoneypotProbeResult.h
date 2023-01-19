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

#ifndef ALIBABACLOUD_SAS_MODEL_GETHONEYPOTPROBERESULT_H_
#define ALIBABACLOUD_SAS_MODEL_GETHONEYPOTPROBERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT GetHoneypotProbeResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ControlNode
					{
						std::string ecsInstanceId;
						std::string nodeName;
						std::string nodeId;
					};
					struct HoneyPotProbeScanPort
					{
						int status;
						std::vector<std::string> serviceIpList1;
						std::string ports;
						long id;
						std::string probeId;
					};
					struct HoneypotProbeBindListItem
					{
						struct BindPortListItem
						{
							std::string msg;
							int status;
							int targetPort;
							std::string proto;
							std::string err;
							int startPort;
							int endPort;
							bool bindPort;
							long id;
							bool fixed;
						};
						int status;
						std::string bindId;
						std::vector<std::string> serviceIpList;
						std::string honeypotId;
						std::vector<HoneypotProbeBindListItem::BindPortListItem> bindPortList;
					};
					std::string hostIp;
					int status;
					std::string probeVersion;
					std::vector<std::string> listenIpList;
					std::string probeType;
					double memoryLoad;
					std::vector<HoneypotProbeBindListItem> honeypotProbeBindList;
					std::vector<std::string> canListenIpList;
					std::string probeId;
					std::string uuid;
					std::string vpcId;
					ControlNode controlNode;
					std::string osType;
					long deployTime;
					bool ping;
					std::string displayName;
					std::string proxyIp;
					HoneyPotProbeScanPort honeyPotProbeScanPort;
					double cpuLoad;
					bool arp;
					std::vector<std::string> cidrList;
				};


				GetHoneypotProbeResult();
				explicit GetHoneypotProbeResult(const std::string &payload);
				~GetHoneypotProbeResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_GETHONEYPOTPROBERESULT_H_