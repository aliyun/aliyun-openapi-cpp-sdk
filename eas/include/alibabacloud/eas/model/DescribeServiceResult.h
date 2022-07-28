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

#ifndef ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICERESULT_H_
#define ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eas/EasExport.h>

namespace AlibabaCloud
{
	namespace Eas
	{
		namespace Model
		{
			class ALIBABACLOUD_EAS_EXPORT DescribeServiceResult : public ServiceResult
			{
			public:


				DescribeServiceResult();
				explicit DescribeServiceResult(const std::string &payload);
				~DescribeServiceResult();
				std::string getMessage()const;
				int getMemory()const;
				int getCurrentVersion()const;
				int getRunningInstance()const;
				int getCpu()const;
				std::string getImage()const;
				int getGpu()const;
				std::string getCallerUid()const;
				std::string getReason()const;
				std::string getSource()const;
				std::string getServiceId()const;
				int getTotalInstance()const;
				std::string getServiceConfig()const;
				std::string getAccessToken()const;
				std::string getInternetEndpoint()const;
				std::string getStatus()const;
				std::string getCreateTime()const;
				std::string getResource()const;
				std::string get_Namespace()const;
				int getWeight()const;
				int getPendingInstance()const;
				int getLatestVersion()const;
				std::string getServiceName()const;
				std::string getUpdateTime()const;
				std::string getRegion()const;
				std::string getParentUid()const;
				std::string getIntranetEndpoint()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int memory_;
				int currentVersion_;
				int runningInstance_;
				int cpu_;
				std::string image_;
				int gpu_;
				std::string callerUid_;
				std::string reason_;
				std::string source_;
				std::string serviceId_;
				int totalInstance_;
				std::string serviceConfig_;
				std::string accessToken_;
				std::string internetEndpoint_;
				std::string status_;
				std::string createTime_;
				std::string resource_;
				std::string _namespace_;
				int weight_;
				int pendingInstance_;
				int latestVersion_;
				std::string serviceName_;
				std::string updateTime_;
				std::string region_;
				std::string parentUid_;
				std::string intranetEndpoint_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICERESULT_H_