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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_CONFIGDATASETRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_CONFIGDATASETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/qualitycheck/QualitycheckExport.h>

namespace AlibabaCloud
{
	namespace Qualitycheck
	{
		namespace Model
		{
			class ALIBABACLOUD_QUALITYCHECK_EXPORT ConfigDataSetResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct RuleInfo
					{
						struct ConditionBasicInfo
						{
							struct CheckRange
							{
								struct Anchor
								{
									int hitTime;
									std::string cid;
									std::string location;
								};
								struct Range
								{
									int to;
									int from;
								};
								std::string role;
								Anchor anchor;
								Range range;
								int roleId;
							};
							struct OperatorBasicInfo
							{
								struct Param
								{
									std::vector<std::string> keywords;
									bool inSentence;
								};
								std::string type;
								Param param;
								std::string oid;
							};
							std::vector<ConditionBasicInfo::OperatorBasicInfo> operators;
							CheckRange checkRange;
							std::string lambda;
							std::string cid;
						};
						struct RuleBasicInfo
						{
							int externalProperty;
							std::string rid;
							std::string lambda;
						};
						std::vector<RuleBasicInfo> rules;
						std::vector<ConditionBasicInfo> conditions;
					};
					int roleConfigStatus;
					int judgeType;
					RuleInfo ruleInfo;
					long setId;
					int channelType;
				};


				ConfigDataSetResult();
				explicit ConfigDataSetResult(const std::string &payload);
				~ConfigDataSetResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_CONFIGDATASETRESULT_H_