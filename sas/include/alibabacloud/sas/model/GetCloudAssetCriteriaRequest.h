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

#ifndef ALIBABACLOUD_SAS_MODEL_GETCLOUDASSETCRITERIAREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_GETCLOUDASSETCRITERIAREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT GetCloudAssetCriteriaRequest : public RpcServiceRequest {
public:
	struct CloudAssetTypes {
		int assetSubType;
		int assetType;
	};
	GetCloudAssetCriteriaRequest();
	~GetCloudAssetCriteriaRequest();
	std::vector<CloudAssetTypes> getCloudAssetTypes() const;
	void setCloudAssetTypes(const std::vector<CloudAssetTypes> &cloudAssetTypes);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getValue() const;
	void setValue(const std::string &value);

private:
	std::vector<CloudAssetTypes> cloudAssetTypes_;
	std::string sourceIp_;
	std::string value_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_GETCLOUDASSETCRITERIAREQUEST_H_
