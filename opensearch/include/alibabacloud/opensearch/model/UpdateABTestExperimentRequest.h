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

#ifndef ALIBABACLOUD_OPENSEARCH_MODEL_UPDATEABTESTEXPERIMENTREQUEST_H_
#define ALIBABACLOUD_OPENSEARCH_MODEL_UPDATEABTESTEXPERIMENTREQUEST_H_

#include <alibabacloud/opensearch/OpenSearchExport.h>
#include <alibabacloud/core/RoaServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace OpenSearch {
namespace Model {
class ALIBABACLOUD_OPENSEARCH_EXPORT UpdateABTestExperimentRequest : public RoaServiceRequest {
public:
	UpdateABTestExperimentRequest();
	~UpdateABTestExperimentRequest();
	int getGroupId() const;
	void setGroupId(int groupId);
	int getSceneId() const;
	void setSceneId(int sceneId);
	int getExperimentId() const;
	void setExperimentId(int experimentId);
	std::string getAppGroupIdentity() const;
	void setAppGroupIdentity(const std::string &appGroupIdentity);

private:
	int groupId_;
	int sceneId_;
	int experimentId_;
	std::string appGroupIdentity_;
};
} // namespace Model
} // namespace OpenSearch
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_OPENSEARCH_MODEL_UPDATEABTESTEXPERIMENTREQUEST_H_
