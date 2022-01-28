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

#ifndef ALIBABACLOUD_ENS_MODEL_RUNSERVICESCHEDULERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_RUNSERVICESCHEDULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT RunServiceScheduleResult : public ServiceResult
			{
			public:
				struct CommandResult
				{
					std::string command;
					std::string containerName;
					std::string resultMsg;
				};


				RunServiceScheduleResult();
				explicit RunServiceScheduleResult(const std::string &payload);
				~RunServiceScheduleResult();
				std::string getRequestRepeated()const;
				bool getTcpPorts()const;
				std::string getInstanceId()const;
				int getInstancePort()const;
				std::string getInstanceIp()const;
				int getIndex()const;
				std::vector<CommandResult> getCommandResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string requestRepeated_;
				bool tcpPorts_;
				std::string instanceId_;
				int instancePort_;
				std::string instanceIp_;
				int index_;
				std::vector<CommandResult> commandResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_RUNSERVICESCHEDULERESULT_H_