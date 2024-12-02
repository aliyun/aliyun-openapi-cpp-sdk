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

#ifndef ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETMODELFEATURERESULT_H_
#define ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETMODELFEATURERESULT_H_

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
			class ALIBABACLOUD_PAIFEATURESTORE_EXPORT GetModelFeatureResult : public ServiceResult
			{
			public:
				struct Relations
				{
					struct DomainsItem
					{
						std::string domainType;
						std::string id;
						std::string name;
					};
					struct LinksItem
					{
						std::string from;
						std::string to;
						std::string link;
					};
					std::vector<DomainsItem> domains;
					std::vector<LinksItem> links;
				};
				struct FeaturesItem
				{
					std::string type;
					std::string featureViewId;
					std::string aliasName;
					std::string featureViewName;
					std::string name;
				};


				GetModelFeatureResult();
				explicit GetModelFeatureResult(const std::string &payload);
				~GetModelFeatureResult();
				std::string getOwner()const;
				std::string getProjectName()const;
				std::string getProjectId()const;
				Relations getRelations()const;
				std::string getGmtModifiedTime()const;
				std::string getTrainingSetFGTable()const;
				std::string getName()const;
				std::string getTrainingSetTable()const;
				long getLabelPriorityLevel()const;
				std::string getExportTrainingSetTableScript()const;
				std::string getLabelTableName()const;
				std::vector<FeaturesItem> getFeatures()const;
				std::string getLabelTableId()const;
				std::string getGmtCreateTime()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string owner_;
				std::string projectName_;
				std::string projectId_;
				Relations relations_;
				std::string gmtModifiedTime_;
				std::string trainingSetFGTable_;
				std::string name_;
				std::string trainingSetTable_;
				long labelPriorityLevel_;
				std::string exportTrainingSetTableScript_;
				std::string labelTableName_;
				std::vector<FeaturesItem> features_;
				std::string labelTableId_;
				std::string gmtCreateTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PAIFEATURESTORE_MODEL_GETMODELFEATURERESULT_H_