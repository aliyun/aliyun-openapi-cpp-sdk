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

#ifndef ALIBABACLOUD_ENS_MODEL_PUTBUCKETREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_PUTBUCKETREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT PutBucketRequest : public RpcServiceRequest {
public:
	PutBucketRequest();
	~PutBucketRequest();
	std::string getEnsRegionId() const;
	void setEnsRegionId(const std::string &ensRegionId);
	std::string getLogicalBucketType() const;
	void setLogicalBucketType(const std::string &logicalBucketType);
	std::string getCity() const;
	void setCity(const std::string &city);
	std::string getDataRedundancyType() const;
	void setDataRedundancyType(const std::string &dataRedundancyType);
	std::string getEndpoint() const;
	void setEndpoint(const std::string &endpoint);
	std::string getBucketName() const;
	void setBucketName(const std::string &bucketName);
	std::string getStorageDomainId() const;
	void setStorageDomainId(const std::string &storageDomainId);
	std::string getEngineId() const;
	void setEngineId(const std::string &engineId);
	std::string getBucketAcl() const;
	void setBucketAcl(const std::string &bucketAcl);
	std::string getDispatcherType() const;
	void setDispatcherType(const std::string &dispatcherType);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getStorageClass() const;
	void setStorageClass(const std::string &storageClass);
	std::string getDispatchScope() const;
	void setDispatchScope(const std::string &dispatchScope);
	std::string getComment() const;
	void setComment(const std::string &comment);

private:
	std::string ensRegionId_;
	std::string logicalBucketType_;
	std::string city_;
	std::string dataRedundancyType_;
	std::string endpoint_;
	std::string bucketName_;
	std::string storageDomainId_;
	std::string engineId_;
	std::string bucketAcl_;
	std::string dispatcherType_;
	std::string resourceType_;
	std::string storageClass_;
	std::string dispatchScope_;
	std::string comment_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_PUTBUCKETREQUEST_H_
