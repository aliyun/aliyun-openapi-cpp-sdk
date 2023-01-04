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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTARTIFACTSRESULT_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTARTIFACTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>

namespace AlibabaCloud
{
	namespace ComputeNestSupplier
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT ListArtifactsResult : public ServiceResult
			{
			public:
				struct Artifact
				{
					std::string status;
					std::string description;
					std::string artifactId;
					std::string artifactType;
					std::string gmtModified;
					std::string maxVersion;
					std::string name;
				};


				ListArtifactsResult();
				explicit ListArtifactsResult(const std::string &payload);
				~ListArtifactsResult();
				std::vector<Artifact> getArtifacts()const;
				std::string getTotalCount()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Artifact> artifacts_;
				std::string totalCount_;
				std::string nextToken_;
				std::string maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTARTIFACTSRESULT_H_