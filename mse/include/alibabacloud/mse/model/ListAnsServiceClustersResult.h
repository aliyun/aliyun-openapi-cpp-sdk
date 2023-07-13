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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTANSSERVICECLUSTERSRESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTANSSERVICECLUSTERSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListAnsServiceClustersResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct AppDetail
					{
						std::string appId;
						int checkTimeout;
						std::string checkType;
						int unhealthyCheckTimes;
						int port;
						int healthyCheckTimes;
						int checkInternal;
						std::string appName;
						std::string checkPath;
					};
					struct NacosAnsCluster
					{
						int defaultCheckPort;
						bool useIPPort4Check;
						std::string serviceName;
						std::string metadata;
						std::string healthCheckerType;
						int defaultPort;
						std::string name;
					};
					std::string groupName;
					std::string selectorType;
					std::vector<NacosAnsCluster> clusters;
					std::string metadata;
					float protectThreshold;
					bool ephemeral;
					AppDetail appDetail;
					std::string source;
					std::string name;
				};


				ListAnsServiceClustersResult();
				explicit ListAnsServiceClustersResult(const std::string &payload);
				~ListAnsServiceClustersResult();
				std::string getHttpCode()const;
				std::string getMessage()const;
				Data getData()const;
				std::string getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string httpCode_;
				std::string message_;
				Data data_;
				std::string errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTANSSERVICECLUSTERSRESULT_H_