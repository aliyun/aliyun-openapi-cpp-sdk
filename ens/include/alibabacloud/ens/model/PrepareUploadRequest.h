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

#ifndef ALIBABACLOUD_ENS_MODEL_PREPAREUPLOADREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_PREPAREUPLOADREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT PrepareUploadRequest : public RpcServiceRequest {
public:
	PrepareUploadRequest();
	~PrepareUploadRequest();
	std::string getClientIp() const;
	void setClientIp(const std::string &clientIp);
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getAdditionType() const;
	void setAdditionType(const std::string &additionType);
	std::string getBucketName() const;
	void setBucketName(const std::string &bucketName);
	std::string getStation() const;
	void setStation(const std::string &station);
	std::string getObjectKey() const;
	void setObjectKey(const std::string &objectKey);
	long getStorageCost() const;
	void setStorageCost(long storageCost);

private:
	std::string clientIp_;
	std::string ensRegionId_;
	std::string additionType_;
	std::string bucketName_;
	std::string station_;
	std::string objectKey_;
	long storageCost_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_PREPAREUPLOADREQUEST_H_
