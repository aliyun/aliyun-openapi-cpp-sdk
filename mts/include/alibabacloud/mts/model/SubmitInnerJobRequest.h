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

#ifndef ALIBABACLOUD_MTS_MODEL_SUBMITINNERJOBREQUEST_H_
#define ALIBABACLOUD_MTS_MODEL_SUBMITINNERJOBREQUEST_H_

#include <alibabacloud/mts/MtsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mts {
namespace Model {
class ALIBABACLOUD_MTS_EXPORT SubmitInnerJobRequest : public RpcServiceRequest {
public:
	SubmitInnerJobRequest();
	~SubmitInnerJobRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getVideo() const;
	void setVideo(const std::string &video);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	long getUid() const;
	void setUid(long uid);
	std::string getImages() const;
	void setImages(const std::string &images);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getConfig() const;
	void setConfig(const std::string &config);

private:
	long resourceOwnerId_;
	std::string video_;
	std::string accessKeyId_;
	long uid_;
	std::string images_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string pipelineId_;
	std::string config_;
};
} // namespace Model
} // namespace Mts
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MTS_MODEL_SUBMITINNERJOBREQUEST_H_
