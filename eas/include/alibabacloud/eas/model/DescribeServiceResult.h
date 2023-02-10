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
				struct LabelsItem
				{
					std::string labelValue;
					std::string labelKey;
				};


				DescribeServiceResult();
				explicit DescribeServiceResult(const std::string &payload);
				~DescribeServiceResult();
				std::string getMessage()const;
				std::string getServiceGroup()const;
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
				std::string getResourceAlias()const;
				std::string getStatus()const;
				std::string getCreateTime()const;
				std::string getResource()const;
				std::vector<LabelsItem> getLabels()const;
				std::string get_Namespace()const;
				std::string getExtraData()const;
				int getWeight()const;
				std::string getRole()const;
				int getPendingInstance()const;
				int getLatestVersion()const;
				std::string getServiceName()const;
				std::string getSafetyLock()const;
				std::string getUpdateTime()const;
				std::string getServiceUid()const;
				std::string getRegion()const;
				std::string getParentUid()const;
				std::string getIntranetEndpoint()const;
				std::string getRoleAttrs()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string serviceGroup_;
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
				std::string resourceAlias_;
				std::string status_;
				std::string createTime_;
				std::string resource_;
				std::vector<LabelsItem> labels_;
				std::string _namespace_;
				std::string extraData_;
				int weight_;
				std::string role_;
				int pendingInstance_;
				int latestVersion_;
				std::string serviceName_;
				std::string safetyLock_;
				std::string updateTime_;
				std::string serviceUid_;
				std::string region_;
				std::string parentUid_;
				std::string intranetEndpoint_;
				std::string roleAttrs_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAS_MODEL_DESCRIBESERVICERESULT_H_