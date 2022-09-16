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

#ifndef ALIBABACLOUD_ECD_MODEL_MODIFYBUNDLEREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_MODIFYBUNDLEREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT ModifyBundleRequest : public RpcServiceRequest {
public:
	ModifyBundleRequest();
	~ModifyBundleRequest();
	std::string getImageId() const;
	void setImageId(const std::string &imageId);
	std::string getBundleId() const;
	void setBundleId(const std::string &bundleId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getLanguage() const;
	void setLanguage(const std::string &language);
	std::string getBundleName() const;
	void setBundleName(const std::string &bundleName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);

private:
	std::string imageId_;
	std::string bundleId_;
	std::string description_;
	std::string language_;
	std::string bundleName_;
	std::string regionId_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_MODIFYBUNDLEREQUEST_H_
