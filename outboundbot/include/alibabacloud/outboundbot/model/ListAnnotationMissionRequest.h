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

#ifndef ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONREQUEST_H_
#define ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONREQUEST_H_

#include <alibabacloud/outboundbot/OutboundBotExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OutboundBot {
namespace Model {
class ALIBABACLOUD_OUTBOUNDBOT_EXPORT ListAnnotationMissionRequest : public RpcServiceRequest {
public:
	ListAnnotationMissionRequest();
	~ListAnnotationMissionRequest();
	long getCreateTimeStartFilter() const;
	void setCreateTimeStartFilter(long createTimeStartFilter);
	std::string getAnnotationStatusListStringFilter() const;
	void setAnnotationStatusListStringFilter(const std::string &annotationStatusListStringFilter);
	std::string getAnnotationMissionId() const;
	void setAnnotationMissionId(const std::string &annotationMissionId);
	std::string getAnnotationMissionName() const;
	void setAnnotationMissionName(const std::string &annotationMissionName);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	long getCreateTimeEndFilter() const;
	void setCreateTimeEndFilter(long createTimeEndFilter);
	std::vector<int> getAnnotationStatusListFilter() const;
	void setAnnotationStatusListFilter(const std::vector<int> &annotationStatusListFilter);
	int getPageSize() const;
	void setPageSize(int pageSize);
	int getPageIndex() const;
	void setPageIndex(int pageIndex);

private:
	long createTimeStartFilter_;
	std::string annotationStatusListStringFilter_;
	std::string annotationMissionId_;
	std::string annotationMissionName_;
	std::string instanceId_;
	long createTimeEndFilter_;
	std::vector<int> annotationStatusListFilter_;
	int pageSize_;
	int pageIndex_;
};
} // namespace Model
} // namespace OutboundBot
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OUTBOUNDBOT_MODEL_LISTANNOTATIONMISSIONREQUEST_H_
