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

#ifndef ALIBABACLOUD_ICE_MODEL_UPDATEEDITINGPROJECTREQUEST_H_
#define ALIBABACLOUD_ICE_MODEL_UPDATEEDITINGPROJECTREQUEST_H_

#include <alibabacloud/ice/ICEExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ICE {
namespace Model {
class ALIBABACLOUD_ICE_EXPORT UpdateEditingProjectRequest : public RpcServiceRequest {
public:
	UpdateEditingProjectRequest();
	~UpdateEditingProjectRequest();
	std::string getDescription() const;
	void setDescription(const std::string &description);
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getTitle() const;
	void setTitle(const std::string &title);
	std::string getCoverURL() const;
	void setCoverURL(const std::string &coverURL);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getFEExtend() const;
	void setFEExtend(const std::string &fEExtend);
	std::string getBusinessStatus() const;
	void setBusinessStatus(const std::string &businessStatus);
	std::string getTemplateId() const;
	void setTemplateId(const std::string &templateId);
	std::string getTimeline() const;
	void setTimeline(const std::string &timeline);
	std::string getClipsParam() const;
	void setClipsParam(const std::string &clipsParam);

private:
	std::string description_;
	std::string source_;
	std::string title_;
	std::string coverURL_;
	std::string projectId_;
	std::string fEExtend_;
	std::string businessStatus_;
	std::string templateId_;
	std::string timeline_;
	std::string clipsParam_;
};
} // namespace Model
} // namespace ICE
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ICE_MODEL_UPDATEEDITINGPROJECTREQUEST_H_
