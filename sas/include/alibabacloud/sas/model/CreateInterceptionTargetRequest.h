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

#ifndef ALIBABACLOUD_SAS_MODEL_CREATEINTERCEPTIONTARGETREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CREATEINTERCEPTIONTARGETREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT CreateInterceptionTargetRequest : public RpcServiceRequest {
public:
	CreateInterceptionTargetRequest();
	~CreateInterceptionTargetRequest();
	std::string getTargetType() const;
	void setTargetType(const std::string &targetType);
	std::string getClusterName() const;
	void setClusterName(const std::string &clusterName);
	std::vector<std::string> getImageList() const;
	void setImageList(const std::vector<std::string> &imageList);
	std::vector<std::string> getTagList() const;
	void setTagList(const std::vector<std::string> &tagList);
	std::string getTargetName() const;
	void setTargetName(const std::string &targetName);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getAppName() const;
	void setAppName(const std::string &appName);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string get_Namespace() const;
	void set_Namespace(const std::string &_namespace);

private:
	std::string targetType_;
	std::string clusterName_;
	std::vector<std::string> imageList_;
	std::vector<std::string> tagList_;
	std::string targetName_;
	std::string sourceIp_;
	std::string appName_;
	std::string clusterId_;
	std::string _namespace_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CREATEINTERCEPTIONTARGETREQUEST_H_
