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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONDETAILRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QueryTradeMarkApplicationDetailResult : public ServiceResult
			{
			public:
				struct AdminUploads
				{
					std::string loaPicUrl;
					std::string licensePicUrl;
				};
				struct MaterialDetail
				{
					std::string cardNumber;
					std::string contactAddress;
					int status;
					std::string eName;
					std::string address;
					std::string loaUrl;
					std::string city;
					std::string passportUrl;
					std::string province;
					std::string eAddress;
					std::string name;
					std::string idCardUrl;
					std::string businessLicenceUrl;
					int type;
					std::string expirationDate;
					std::string contactZipcode;
					std::string town;
					std::string contactNumber;
					std::string contactEmail;
					std::string country;
					int region;
					std::string legalNoticeUrl;
					std::string contactName;
				};
				struct FirstClassification
				{
					std::string code;
					std::string name;
				};
				struct RenewResponse
				{
					long registerTime;
					long submitSbjtime;
					std::string address;
					std::string engName;
					std::string engAddress;
					std::string name;
				};
				struct ThirdClassifications
				{
					std::string code;
					std::string name;
				};
				struct SupplementsItem
				{
					int status;
					long sendTime;
					long sbjDeadTime;
					std::string tmNumber;
					std::string orderId;
					std::string uploadFileTemplateUrl;
					long operateTime;
					int type;
					std::string batchNum;
					std::string serialNumber;
					std::string content;
					long acceptDeadTime;
					std::vector<std::string> fileTemplateUrls;
					long acceptTime;
					long id;
				};


				QueryTradeMarkApplicationDetailResult();
				explicit QueryTradeMarkApplicationDetailResult(const std::string &payload);
				~QueryTradeMarkApplicationDetailResult();
				FirstClassification getFirstClassification()const;
				std::vector<std::string> getJudgeResultUrl()const;
				std::string getLoaUrl()const;
				std::vector<std::string> getReceiptUrl()const;
				std::string getTmIcon()const;
				std::string getAcceptUrl()const;
				std::string getSendSbjLogistics()const;
				int getTmNameType()const;
				std::string getSendUserLogistics()const;
				std::string getGrayIconUrl()const;
				AdminUploads getAdminUploads()const;
				std::vector<ThirdClassifications> getThirdClassification()const;
				std::string getExtendInfo()const;
				int getStatus()const;
				long getMaterialId()const;
				RenewResponse getRenewResponse()const;
				MaterialDetail getMaterialDetail()const;
				std::string getTmNumber()const;
				long getCreateTime()const;
				int getOrderPrice()const;
				std::string getOrderId()const;
				std::vector<SupplementsItem> getSupplements()const;
				int getType()const;
				std::string getRecvUserLogistics()const;
				std::string getNote()const;
				std::string getTmName()const;
				long getUpdateTime()const;
				std::string getBizId()const;

			protected:
				void parse(const std::string &payload);
			private:
				FirstClassification firstClassification_;
				std::vector<std::string> judgeResultUrl_;
				std::string loaUrl_;
				std::vector<std::string> receiptUrl_;
				std::string tmIcon_;
				std::string acceptUrl_;
				std::string sendSbjLogistics_;
				int tmNameType_;
				std::string sendUserLogistics_;
				std::string grayIconUrl_;
				AdminUploads adminUploads_;
				std::vector<ThirdClassifications> thirdClassification_;
				std::string extendInfo_;
				int status_;
				long materialId_;
				RenewResponse renewResponse_;
				MaterialDetail materialDetail_;
				std::string tmNumber_;
				long createTime_;
				int orderPrice_;
				std::string orderId_;
				std::vector<SupplementsItem> supplements_;
				int type_;
				std::string recvUserLogistics_;
				std::string note_;
				std::string tmName_;
				long updateTime_;
				std::string bizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYTRADEMARKAPPLICATIONDETAILRESULT_H_