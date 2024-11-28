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

#ifndef ALIBABACLOUD_VOD_MODEL_SUBMITTRANSCODEJOBSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_SUBMITTRANSCODEJOBSREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT SubmitTranscodeJobsRequest : public RpcServiceRequest {
public:
	SubmitTranscodeJobsRequest();
	~SubmitTranscodeJobsRequest();
	std::string getSessionId() const;
	void setSessionId(const std::string &sessionId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getUserData() const;
	void setUserData(const std::string &userData);
	std::string getVideoId() const;
	void setVideoId(const std::string &videoId);
	std::string getOverrideParams() const;
	void setOverrideParams(const std::string &overrideParams);
	std::string getPriority() const;
	void setPriority(const std::string &priority);
	std::string getPipelineId() const;
	void setPipelineId(const std::string &pipelineId);
	std::string getTemplateGroupId() const;
	void setTemplateGroupId(const std::string &templateGroupId);
	std::string getFileUrl() const;
	void setFileUrl(const std::string &fileUrl);
	std::string getEncryptConfig() const;
	void setEncryptConfig(const std::string &encryptConfig);

private:
	std::string sessionId_;
	std::string accessKeyId_;
	std::string userData_;
	std::string videoId_;
	std::string overrideParams_;
	std::string priority_;
	std::string pipelineId_;
	std::string templateGroupId_;
	std::string fileUrl_;
	std::string encryptConfig_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_SUBMITTRANSCODEJOBSREQUEST_H_
