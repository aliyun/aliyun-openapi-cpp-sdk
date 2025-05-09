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

#ifndef ALIBABACLOUD_VOD_MODEL_PRELOADVODOBJECTCACHESREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_PRELOADVODOBJECTCACHESREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT PreloadVodObjectCachesRequest : public RpcServiceRequest {
public:
	PreloadVodObjectCachesRequest();
	~PreloadVodObjectCachesRequest();
	std::string getObjectPath() const;
	void setObjectPath(const std::string &objectPath);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	bool getL2Preload() const;
	void setL2Preload(bool l2Preload);
	std::string getArea() const;
	void setArea(const std::string &area);
	std::string getWithHeader() const;
	void setWithHeader(const std::string &withHeader);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string objectPath_;
	std::string securityToken_;
	bool l2Preload_;
	std::string area_;
	std::string withHeader_;
	long ownerId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_PRELOADVODOBJECTCACHESREQUEST_H_
