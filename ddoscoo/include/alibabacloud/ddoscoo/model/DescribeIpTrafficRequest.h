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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEIPTRAFFICREQUEST_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEIPTRAFFICREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT DescribeIpTrafficRequest : public RpcServiceRequest
			{

			public:
				DescribeIpTrafficRequest();
				~DescribeIpTrafficRequest();

				long getStartTime()const;
				void setStartTime(long startTime);
				std::string getEip()const;
				void setEip(const std::string& eip);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getEndTime()const;
				void setEndTime(long endTime);
				int getPort()const;
				void setPort(int port);
				std::string getQueryProtocol()const;
				void setQueryProtocol(const std::string& queryProtocol);
				int getInterval()const;
				void setInterval(int interval);

            private:
				long startTime_;
				std::string eip_;
				std::string resourceGroupId_;
				std::string sourceIp_;
				long endTime_;
				int port_;
				std::string queryProtocol_;
				int interval_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_DESCRIBEIPTRAFFICREQUEST_H_