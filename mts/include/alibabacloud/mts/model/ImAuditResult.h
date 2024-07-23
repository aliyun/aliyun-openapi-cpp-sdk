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

#ifndef ALIBABACLOUD_MTS_MODEL_IMAUDITRESULT_H_
#define ALIBABACLOUD_MTS_MODEL_IMAUDITRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mts/MtsExport.h>

namespace AlibabaCloud
{
	namespace Mts
	{
		namespace Model
		{
			class ALIBABACLOUD_MTS_EXPORT ImAuditResult : public ServiceResult
			{
			public:
				struct ImageResults
				{
					struct ResultItem
					{
						struct Result
						{
							struct HintWordsInfoItem
							{
								std::string context;
							};
							struct QrcodeLocationsItem
							{
								std::string qrcode;
								float w;
								float x;
								float h;
								float y;
							};
							struct ProgramCodeDataItem
							{
								float w;
								float x;
								float h;
								float y;
							};
							struct LogoDataItem
							{
								std::string type;
								float w;
								float x;
								float h;
								float y;
								std::string name;
							};
							struct SfaceDataItem
							{
								struct FacesItem
								{
									float re;
									std::string idid;
									std::string name;
								};
								float w;
								float x;
								float h;
								float y;
								std::vector<SfaceDataItem::FacesItem> faces;
							};
							struct FramesItem
							{
								float rate;
								std::string url;
							};
							std::string suggestion;
							std::vector<Result::FramesItem> frames;
							std::vector<Result::QrcodeLocationsItem> qrcodeLocations;
							double rate;
							std::vector<Result::LogoDataItem> logoData;
							std::string label;
							std::vector<Result::HintWordsInfoItem> hintWordsInfo;
							std::vector<Result::ProgramCodeDataItem> programCodeData;
							std::vector<std::string> qrcodeData;
							std::vector<std::string> ocrData;
							std::vector<Result::SfaceDataItem> sfaceData;
							std::string scene;
						};
						std::string msg;
						std::string dataId;
						std::string taskId;
						std::string extras;
						std::vector<ResultItem::Result> results;
						long code;
						std::string url;
					};
					std::vector<ResultItem> result;
				};
				struct TextResults
				{
					struct ResultItem2
					{
						struct Result4
						{
							struct DetailsItem
							{
								struct ContextsItem
								{
									std::string context;
									std::string libName;
									std::vector<std::string> positions;
									std::string libCode;
									std::string ruleType;
								};
								std::string label;
								std::vector<DetailsItem::ContextsItem> contexts;
							};
							std::string suggestion;
							double rate;
							std::string label;
							std::vector<Result4::DetailsItem> details;
							std::string scene;
						};
						std::string msg;
						std::vector<ResultItem2::Result4> results3;
						std::string dataId;
						std::string taskId;
						std::string content;
						long code;
					};
					std::vector<ResultItem2> result1;
				};


				ImAuditResult();
				explicit ImAuditResult(const std::string &payload);
				~ImAuditResult();
				bool getTextQuotaExceed()const;
				bool getImageQuotaExceed()const;
				ImageResults getImageResults()const;
				TextResults getTextResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				bool textQuotaExceed_;
				bool imageQuotaExceed_;
				ImageResults imageResults_;
				TextResults textResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MTS_MODEL_IMAUDITRESULT_H_