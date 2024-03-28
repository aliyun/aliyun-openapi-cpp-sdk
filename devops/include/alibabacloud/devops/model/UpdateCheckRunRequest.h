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

#ifndef ALIBABACLOUD_DEVOPS_MODEL_UPDATECHECKRUNREQUEST_H_
#define ALIBABACLOUD_DEVOPS_MODEL_UPDATECHECKRUNREQUEST_H_

#include <alibabacloud/devops/DevopsExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Devops {
namespace Model {
class ALIBABACLOUD_DEVOPS_EXPORT UpdateCheckRunRequest : public RoaServiceRequest {
public:
	struct Body {
		std::string conclusion;
		struct Output {
			std::string summary;
			struct ImagesItem {
				std::string imageUrl;
				std::string alt;
				std::string caption;
			};
			imagesItem imagesItem;
			std::vector<imagesItem> images;
			std::string text;
			std::string title;
		};
		output output;
		std::string completedAt;
		std::string detailsUrl;
		std::string name;
		std::string startedAt;
		std::string externalId;
		struct AnnotationsItem {
			std::string path;
			long endLine;
			long startColumn;
			std::string annotationLevel;
			long startLine;
			std::string message;
			std::string title;
			std::string rawDetails;
			long endColumn;
		};
		annotationsItem annotationsItem;
		std::vector<annotationsItem> annotations;
		std::string status;
	};
	UpdateCheckRunRequest();
	~UpdateCheckRunRequest();
	std::string getOrganizationId() const;
	void setOrganizationId(const std::string &organizationId);
	std::string getRepositoryIdentity() const;
	void setRepositoryIdentity(const std::string &repositoryIdentity);
	std::string getAccessToken() const;
	void setAccessToken(const std::string &accessToken);
	long getCheckRunId() const;
	void setCheckRunId(long checkRunId);
	body getBody() const;
	void setBody(const body &body);

private:
	std::string organizationId_;
	std::string repositoryIdentity_;
	std::string accessToken_;
	long checkRunId_;
	body body_;
};
} // namespace Model
} // namespace Devops
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DEVOPS_MODEL_UPDATECHECKRUNREQUEST_H_
