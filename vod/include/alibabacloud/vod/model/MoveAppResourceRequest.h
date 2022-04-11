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

#ifndef ALIBABACLOUD_VOD_MODEL_MOVEAPPRESOURCEREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_MOVEAPPRESOURCEREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT MoveAppResourceRequest : public RpcServiceRequest {
public:
	MoveAppResourceRequest();
	~MoveAppResourceRequest();
	long getResourceRealOwnerId() const;
	void setResourceRealOwnerId(long resourceRealOwnerId);
	std::string getResourceType() const;
	void setResourceType(const std::string &resourceType);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getTargetAppId() const;
	void setTargetAppId(const std::string &targetAppId);
	std::string getResourceIds() const;
	void setResourceIds(const std::string &resourceIds);

private:
	long resourceRealOwnerId_;
	std::string resourceType_;
	std::string accessKeyId_;
	std::string targetAppId_;
	std::string resourceIds_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_MOVEAPPRESOURCEREQUEST_H_
