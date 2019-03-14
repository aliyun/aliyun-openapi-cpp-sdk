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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTFLOWCLUSTERHOSTRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTFLOWCLUSTERHOSTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListFlowClusterHostResult : public ServiceResult
			{
			public:
				struct Host
				{
					std::string role;
					std::string status;
					std::string type;
					std::string serialNumber;
					std::string publicIp;
					std::string privateIp;
					int memory;
					int cpu;
					std::string hostId;
					std::string instanceType;
					std::string hostInstanceId;
					std::string hostName;
				};


				ListFlowClusterHostResult();
				explicit ListFlowClusterHostResult(const std::string &payload);
				~ListFlowClusterHostResult();
				std::vector<Host> getHostList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Host> hostList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTFLOWCLUSTERHOSTRESULT_H_