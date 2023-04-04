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

#ifndef ALIBABACLOUD_IMM_MODEL_LISTBATCHESRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_LISTBATCHESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT ListBatchesResult : public ServiceResult
			{
			public:
				struct BatchesItem
				{
					struct Input
					{
						struct OSS
						{
							std::string bucket;
							std::string prefix;
							std::vector<std::string> matchExpressions;
						};
						OSS oSS;
					};
					struct Notification
					{
						std::string endpoint;
						std::string topic;
					};
					struct Statistic
					{
						long submitFailure;
						long submitSuccess;
					};
					struct ActionsItem
					{
						std::vector<std::string> parameters;
						std::string name;
					};
					Input input;
					Statistic statistic;
					std::vector<BatchesItem::ActionsItem> actions;
					std::string state;
					std::string createTime;
					std::string updateTime;
					std::string error;
					std::string id;
					std::string marker;
					Notification notification;
					std::string tags;
				};


				ListBatchesResult();
				explicit ListBatchesResult(const std::string &payload);
				~ListBatchesResult();
				std::string getNextToken()const;
				std::vector<BatchesItem> getBatches()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<BatchesItem> batches_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_LISTBATCHESRESULT_H_