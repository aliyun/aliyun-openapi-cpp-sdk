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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETLABELTABLERESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETLABELTABLERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/paifeaturestore/PaiFeatureStoreExport.h>

namespace AlibabaCloud
{
	namespace PaiFeatureStore
	{
		namespace Model
		{
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetLabelTableResult : public ServiceResult
			{
			public:
				struct Field
				{
					std::string type;
					std::vector<std::string> attributes;
					std::string name;
				};


				GetLabelTableResult();
				explicit GetLabelTableResult(const std::string &payload);
				~GetLabelTableResult();
				std::vector<std::string> getRelatedModelFeatures()const;
				std::string getOwner()const;
				std::vector<Field> getFields()const;
				std::string getDatasourceId()const;
				std::string getDatasourceName()const;
				std::string getProjectName()const;
				std::string getProjectId()const;
				std::string getGmtCreateTime()const;
				std::string getGmtModifiedTime()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> relatedModelFeatures_;
				std::string owner_;
				std::vector<Field> fields_;
				std::string datasourceId_;
				std::string datasourceName_;
				std::string projectName_;
				std::string projectId_;
				std::string gmtCreateTime_;
				std::string gmtModifiedTime_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETLABELTABLERESULT_H_