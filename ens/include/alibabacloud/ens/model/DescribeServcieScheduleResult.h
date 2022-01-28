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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBESERVCIESCHEDULERESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBESERVCIESCHEDULERESULT_H_

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
			class ALIBABACLOUD_ENS_EXPORT DescribeServcieScheduleResult : public ServiceResult
			{
			public:
				struct PodAbstractInfo
				{
					struct ContainerStatus
					{
						std::string containerId;
						std::string name;
					};
					bool status;
					bool resourceScope;
					std::vector<ContainerStatus> containerStatuses;
					bool _namespace;
					bool containerService;
					bool name;
				};


				DescribeServcieScheduleResult();
				explicit DescribeServcieScheduleResult(const std::string &payload);
				~DescribeServcieScheduleResult();
				bool getRequestRepeated()const;
				std::string getTcpPorts()const;
				std::string getInstanceId()const;
				int getInstancePort()const;
				std::string getInstanceIp()const;
				int getIndex()const;
				PodAbstractInfo getPodAbstractInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool requestRepeated_;
				std::string tcpPorts_;
				std::string instanceId_;
				int instancePort_;
				std::string instanceIp_;
				int index_;
				PodAbstractInfo podAbstractInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBESERVCIESCHEDULERESULT_H_