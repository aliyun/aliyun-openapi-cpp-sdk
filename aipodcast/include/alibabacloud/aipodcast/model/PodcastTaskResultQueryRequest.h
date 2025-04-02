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

#ifndef ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKRESULTQUERYREQUEST_H_
#define ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKRESULTQUERYREQUEST_H_

#include <alibabacloud/aipodcast/AIPodcastExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace AIPodcast {
namespace Model {
class ALIBABACLOUD_AIPODCAST_EXPORT PodcastTaskResultQueryRequest : public RoaServiceRequest {
public:
	PodcastTaskResultQueryRequest();
	~PodcastTaskResultQueryRequest();
	std::string getAppId() const;
	void setAppId(const std::string &appId);
	std::string getTaskId() const;
	void setTaskId(const std::string &taskId);
	std::string getWorkspaceId() const;
	void setWorkspaceId(const std::string &workspaceId);

private:
	std::string appId_;
	std::string taskId_;
	std::string workspaceId_;
};
} // namespace Model
} // namespace AIPodcast
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_AIPODCAST_MODEL_PODCASTTASKRESULTQUERYREQUEST_H_
