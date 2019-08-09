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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICERESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICERESULT_H_

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
			class ALIBABACLOUD_EMR_EXPORT DescribeClusterServiceResult : public ServiceResult
			{
			public:
				struct ServiceInfo
				{
					struct ServiceAction
					{
						std::string actionName;
						std::string serviceName;
						std::string command;
						std::string displayName;
						std::string componentName;
					};
					struct ClusterServiceSummary
					{
						std::string status;
						std::string type;
						std::string category;
						std::string displayName;
						std::string value;
						std::string alertInfo;
						std::string key;
						int desiredStoppedValue;
					};
					std::vector<std::string> needRestartComponentNameList;
					std::vector<ServiceAction> serviceActionList;
					std::string serviceName;
					std::string serviceStatus;
					std::vector<ClusterServiceSummary> clusterServiceSummaryList;
					std::string serviceVersion;
					std::string needRestartInfo;
					std::vector<std::string> needRestartHostIdList;
					int needRestartNum;
				};


				DescribeClusterServiceResult();
				explicit DescribeClusterServiceResult(const std::string &payload);
				~DescribeClusterServiceResult();
				ServiceInfo getServiceInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				ServiceInfo serviceInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBECLUSTERSERVICERESULT_H_