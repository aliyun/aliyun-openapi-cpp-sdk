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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEDISKREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEDISKREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateDiskRequest : public RpcServiceRequest {
public:
	struct Tag {
		std::string value;
		std::string key;
	};
	CreateDiskRequest();
	~CreateDiskRequest();
	std::string getDiskName() const;
	void setDiskName(const std::string &diskName);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::vector<Tag> getTag() const;
	void setTag(const std::vector<Tag> &tag);
	std::string getSize() const;
	void setSize(const std::string &size);
	std::string getSnapshotId() const;
	void setSnapshotId(const std::string &snapshotId);
	std::string getInstanceChargeType() const;
	void setInstanceChargeType(const std::string &instanceChargeType);
	bool getEncrypted() const;
	void setEncrypted(bool encrypted);
	std::string getCategory() const;
	void setCategory(const std::string &category);
	std::string getKMSKeyId() const;
	void setKMSKeyId(const std::string &kMSKeyId);

private:
	std::string diskName_;
	std::string ensRegionId_;
	std::vector<Tag> tag_;
	std::string size_;
	std::string snapshotId_;
	std::string instanceChargeType_;
	bool encrypted_;
	std::string category_;
	std::string kMSKeyId_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEDISKREQUEST_H_
