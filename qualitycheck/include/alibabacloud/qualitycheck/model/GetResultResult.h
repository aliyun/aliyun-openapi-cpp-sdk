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

#ifndef ALIBABACLOUD_QUALITYCHECK_MODEL_GETRESULTRESULT_H_
#define ALIBABACLOUD_QUALITYCHECK_MODEL_GETRESULTRESULT_H_

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
			class ALIBABACLOUD_QUALITYCHECK_EXPORT GetResultResult : public ServiceResult
			{
			public:
				struct ResultInfo
				{
					struct Recording
					{
						std::string remark13;
						std::string callee;
						std::string remark11;
						std::string remark12;
						int dialogueSize;
						int callType;
						std::string url;
						std::string dataSetName;
						std::string name;
						std::string remark6;
						std::string remark7;
						std::string remark4;
						long remark5;
						std::string remark2;
						std::string remark3;
						std::string remark1;
						std::string remark8;
						std::string remark9;
						std::string business;
						std::string callId;
						long duration;
						std::string caller;
						std::string id;
						std::string callTime;
						std::string remark10;
						std::string primaryId;
					};
					struct Agent
					{
						std::string skillGroup;
						std::string id;
						std::string name;
					};
					struct AsrResultItem
					{
						std::string role;
						std::string words;
						long begin;
						long end;
						int speechRate;
						int emotionValue;
					};
					struct HitResultItem
					{
						struct Hit
						{
							struct Phrase
							{
								std::string role;
								std::string words;
								long begin;
								int end;
								int emotionValue;
							};
							struct KeyWord
							{
								std::string val;
								int from;
								int to;
								std::string cid;
							};
							Phrase phrase;
							std::vector<Hit::KeyWord> keyWords;
							std::vector<std::string> cid;
						};
						std::vector<HitResultItem::Hit> hits;
						std::string type;
						long schemeId;
						long schemeVersion;
						int reviewResult;
						std::string rid;
						std::string name;
					};
					struct HitScoreItem
					{
						std::string ruleId;
						std::string scoreName;
						std::string scoreNumber;
						std::string scoreId;
					};
					int status;
					Agent agent;
					std::string taskId;
					std::string resolver;
					std::vector<std::string> schemeNameList;
					std::string comments;
					std::string createTime;
					std::string reviewTime;
					int reviewResult;
					std::vector<ResultInfo::HitScoreItem> hitScore;
					std::string createTimeLong;
					std::string reviewer;
					std::vector<ResultInfo::HitResultItem> hitResult;
					int score;
					std::vector<std::string> schemeIdList;
					std::string assignmentTime;
					std::string taskName;
					int reviewStatus;
					std::string lastDataId;
					std::string reviewTimeLong;
					Recording recording;
					std::string errorMessage;
					std::vector<ResultInfo::AsrResultItem> asrResult;
					int reviewType;
				};


				GetResultResult();
				explicit GetResultResult(const std::string &payload);
				~GetResultResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ResultInfo> getData()const;
				int getCount()const;
				std::string getCode()const;
				bool getSuccess()const;
				std::string getResultCountId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<ResultInfo> data_;
				int count_;
				std::string code_;
				bool success_;
				std::string resultCountId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_QUALITYCHECK_MODEL_GETRESULTRESULT_H_