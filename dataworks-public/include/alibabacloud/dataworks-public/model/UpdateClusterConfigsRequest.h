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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATECLUSTERCONFIGSREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATECLUSTERCONFIGSREQUEST_H_

#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dataworks_public {
namespace Model {
class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT UpdateClusterConfigsRequest : public RpcServiceRequest {
public:
	struct ConfigValues {
		bool enableOverwrite;
		std::string moduleName;
		std::string configValue;
	};
	UpdateClusterConfigsRequest();
	~UpdateClusterConfigsRequest();
	std::string getConfigType() const;
	void setConfigType(const std::string &configType);
	long getClusterId() const;
	void setClusterId(long clusterId);
	std::vector<ConfigValues> getConfigValues() const;
	void setConfigValues(const std::vector<ConfigValues> &configValues);
	long getProjectId() const;
	void setProjectId(long projectId);

private:
	std::string configType_;
	long clusterId_;
	std::vector<ConfigValues> configValues_;
	long projectId_;
};
} // namespace Model
} // namespace Dataworks_public
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_UPDATECLUSTERCONFIGSREQUEST_H_
