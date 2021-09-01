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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitEditingJobsRequest : public RpcServiceRequest {
public:
	SubmitEditingJobsRequest();
	~SubmitEditingJobsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getOutputLocation() const;
	void setOutputLocation(const std::string &outputLocation);
	std::string getEditingInputs() const;
	void setEditingInputs(const std::string &editingInputs);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getEditingJobURL() const;
	void setEditingJobURL(const std::string &editingJobURL);
	long getEditingJobOssFileUid() const;
	void setEditingJobOssFileUid(long editingJobOssFileUid);
	std::string getEditingJobOutputs() const;
	void setEditingJobOutputs(const std::string &editingJobOutputs);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getOutputBucket() const;
	void setOutputBucket(const std::string &outputBucket);
	std::string getEditingJobOssFileRoleArn() const;
	void setEditingJobOssFileRoleArn(const std::string &editingJobOssFileRoleArn);

private:
	long resourceOwnerId_;
	std::string outputLocation_;
	std::string editingInputs_;
	std::string accessKeyId_;
	std::string editingJobURL_;
	long editingJobOssFileUid_;
	std::string editingJobOutputs_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	long ownerId_;
	std::string pipelineId_;
	std::string outputBucket_;
	std::string editingJobOssFileRoleArn_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITEDITINGJOBSREQUEST_H_
