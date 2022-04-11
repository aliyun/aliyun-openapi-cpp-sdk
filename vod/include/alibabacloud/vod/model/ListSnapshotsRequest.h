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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTSNAPSHOTSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_LISTSNAPSHOTSREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT ListSnapshotsRequest : public RpcServiceRequest {
public:
	ListSnapshotsRequest();
	~ListSnapshotsRequest();
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getAuthTimeout() const;
	void setAuthTimeout(const std::string &authTimeout);
	std::string getVideoId() const;
	void setVideoId(const std::string &videoId);
	std::string getSnapshotType() const;
	void setSnapshotType(const std::string &snapshotType);
	std::string getPageNo() const;
	void setPageNo(const std::string &pageNo);

private:
	std::string accessKeyId_;
	std::string pageSize_;
	std::string authTimeout_;
	std::string videoId_;
	std::string snapshotType_;
	std::string pageNo_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_LISTSNAPSHOTSREQUEST_H_
