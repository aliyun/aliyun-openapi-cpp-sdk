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

#ifndef ALIBABACLOUD_VOD_MODEL_GETTRANSCODETASKREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETTRANSCODETASKREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT GetTranscodeTaskRequest : public RpcServiceRequest {
public:
	GetTranscodeTaskRequest();
	~GetTranscodeTaskRequest();
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getTranscodeTaskId() const;
	void setTranscodeTaskId(const std::string &transcodeTaskId);
	std::string getJobIds() const;
	void setJobIds(const std::string &jobIds);

private:
	std::string accessKeyId_;
	std::string transcodeTaskId_;
	std::string jobIds_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_GETTRANSCODETASKREQUEST_H_
