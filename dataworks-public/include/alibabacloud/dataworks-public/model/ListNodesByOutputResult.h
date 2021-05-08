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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTNODESBYOUTPUTRESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTNODESBYOUTPUTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT ListNodesByOutputResult : public ServiceResult
			{
			public:
				struct OutputNodePair
				{
					struct Node
					{
						long baselineId;
						std::string description;
						std::string resGroupName;
						std::string nodeName;
						int priority;
						int dqcType;
						std::string paramValues;
						long projectId;
						std::string connection;
						std::string schedulerType;
						long relatedFlowId;
						std::string cronExpress;
						bool repeatability;
						std::string ownerId;
						std::string fileType;
						std::string dqcDescription;
						long nodeId;
						std::string programType;
						int repeatInterval;
					};
					std::vector<OutputNodePair::Node> nodeList;
					std::string output;
				};


				ListNodesByOutputResult();
				explicit ListNodesByOutputResult(const std::string &payload);
				~ListNodesByOutputResult();
				int getHttpStatusCode()const;
				std::vector<OutputNodePair> getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				std::vector<OutputNodePair> data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_LISTNODESBYOUTPUTRESULT_H_