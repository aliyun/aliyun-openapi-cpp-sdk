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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETARTIFACTREQUEST_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETARTIFACTREQUEST_H_

#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ComputeNestSupplier {
namespace Model {
class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT GetArtifactRequest : public RpcServiceRequest {
public:
	GetArtifactRequest();
	~GetArtifactRequest();
	std::string getArtifactVersion() const;
	void setArtifactVersion(const std::string &artifactVersion);
	std::string getArtifactName() const;
	void setArtifactName(const std::string &artifactName);
	std::string getArtifactId() const;
	void setArtifactId(const std::string &artifactId);

private:
	std::string artifactVersion_;
	std::string artifactName_;
	std::string artifactId_;
};
} // namespace Model
} // namespace ComputeNestSupplier
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_GETARTIFACTREQUEST_H_
