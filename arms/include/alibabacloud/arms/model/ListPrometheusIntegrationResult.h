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

#ifndef ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSINTEGRATIONRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSINTEGRATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT ListPrometheusIntegrationResult : public ServiceResult
			{
			public:
				struct Instance
				{
					std::string status;
					std::string describe;
					bool canEditor;
					std::string clusterId;
					long instanceId;
					bool needUpgrade;
					bool canDelete;
					std::string _namespace;
					std::string instanceName;
					std::string target;
					std::string podName;
					std::string version;
					std::string containerName;
					bool showLog;
					std::string exporterType;
					std::string param;
					bool showDescribe;
					std::string integrationType;
				};


				ListPrometheusIntegrationResult();
				explicit ListPrometheusIntegrationResult(const std::string &payload);
				~ListPrometheusIntegrationResult();
				std::string getMessage()const;
				std::vector<Instance> getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::vector<Instance> data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_LISTPROMETHEUSINTEGRATIONRESULT_H_