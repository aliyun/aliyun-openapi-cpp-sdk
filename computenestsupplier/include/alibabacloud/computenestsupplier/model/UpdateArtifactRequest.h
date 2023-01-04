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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATEARTIFACTREQUEST_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATEARTIFACTREQUEST_H_

#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNestSupplier {
namespace Model {
class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT UpdateArtifactRequest : public RpcServiceRequest {
public:
	UpdateArtifactRequest();
	~UpdateArtifactRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::vector<std::string> getSupportRegionIds() const;
	void setSupportRegionIds(const std::vector<std::string> &supportRegionIds);
	std::string getArtifactId() const;
	void setArtifactId(const std::string &artifactId);
	std::string getArtifactProperty() const;
	void setArtifactProperty(const std::string &artifactProperty);
	std::string getVersionName() const;
	void setVersionName(const std::string &versionName);

private:
	std::string description_;
	std::vector<std::string> supportRegionIds_;
	std::string artifactId_;
	std::string artifactProperty_;
	std::string versionName_;
};
} // namespace Model
} // namespace ComputeNestSupplier
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_UPDATEARTIFACTREQUEST_H_
