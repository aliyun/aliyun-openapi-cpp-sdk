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

#ifndef ALIBABACLOUD_PTS_MODEL_LISTOPENJMETERSCENESREQUEST_H_
#define ALIBABACLOUD_PTS_MODEL_LISTOPENJMETERSCENESREQUEST_H_

#include <alibabacloud/pts/PTSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace PTS {
namespace Model {
class ALIBABACLOUD_PTS_EXPORT ListOpenJMeterScenesRequest : public RpcServiceRequest {
public:
	ListOpenJMeterScenesRequest();
	~ListOpenJMeterScenesRequest();
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getSceneId() const;
	void setSceneId(const std::string &sceneId);
	std::string getSceneName() const;
	void setSceneName(const std::string &sceneName);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);

private:
	int pageSize_;
	std::string sceneId_;
	std::string sceneName_;
	int pageNumber_;
};
} // namespace Model
} // namespace PTS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_PTS_MODEL_LISTOPENJMETERSCENESREQUEST_H_
